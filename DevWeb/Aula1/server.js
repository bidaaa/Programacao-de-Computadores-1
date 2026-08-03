import agenda from './db.js';
import express from 'express';

const app = express();
const port = 3000;

app.use(express.json());

app.get('/', (req, res) => {
  res.status(200).send(agenda);
});

app.get('/:id', (req, res) => {
  const id = parseInt(req.params.id);
  const contato = agenda.find(c => c.id === id);

  if (contato) {
    res.status(200).send(contato);
  } else {
    res.status(404).send({ message:'Contato não encontrado'});
  }
});

app.post('/', (req, res) => {
  const { nome, telefone, email, nota, ativo } = req.body;
  agenda.push({ id: agenda.length + 1, nome, telefone, email, nota, ativo });
  res.status(201).send({ message: 'Contato adicionado com sucesso' });
});

app.delete('/:id', (req,res) => {
    const id = parseInt(req.params.id)
    const indice = agenda.findIndex(c => c.id === id)

    if(indice === -1){
        res.status(404).send({message: "Contato não encontrado"})
    }

    const contatoRemovido = agenda.splice(indice,1)
    res.status(200).send("Contato deletado com sucesso")
})

app.put('/:id', (req,res) => {
    const id = parseInt(req.params.id)
    const contato = agenda.find(c => c.id === id)

    if(!contato){
        res.status(404).send({message: "Contato não encontrado"})
        return
    }

    const contatoAlterar = req.body
    const campos = Object.keys(contatoAlterar)
    for (let c of campos){
        contato[c] = contatoAlterar[c]
    }
    res.status(200).send({message: "Contato atualizado com sucesso"})
})

app.listen(port, () => {
  console.log("Server ligado");
});