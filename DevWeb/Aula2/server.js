import {livros, pessoas, emprestimos} from './db.js';
import express from 'express';
const app = express();
const port = 3000;

app.use(express.json());

app.get('/bib/livro', (req, res) => {
  res.status(200).send(livros);
});

app.get('/bib/user', (req, res) => {
  res.status(200).send(pessoas);
});

app.get('/bib/locar', (req, res) => {
  res.status(200).send(emprestimos);
});

app.get('/bib/livro/:id', (req, res) => {
  const id = parseInt(req.params.id);
  const livro = livros.find(c => c.id_livro === id);

  if (livro) {
    res.status(200).send(livro);
  } else {
    res.status(404).send({ message:'Livro não encontrado'});
  }
})

app.post('/bib/livro', (req, res) => {
  const { titulo, isbn, edicao, ano } = req.body;
  livros.push({ id_livro: livros.length + 1, titulo, isbn, edicao, ano });
  res.status(201).send({ message: 'Livro adicionado com sucesso' });
});

app.post('/bib/user', (req, res) => {
    const { nome, cpf, email, senha} = req.body;
    pessoas.push({ id_user: pessoas.length + 1, nome, cpf, email, senha });
    res.status(201).send({ message: 'Pessoa adicionada com sucesso' });
});

app.post('/bib/locar', (req, res) => {
    const { id_user, id_livro, status } = req.body;
    emprestimos.push({id_user, id_livro, status});
    res.status(201).send({ message: 'Empréstimo adicionado com sucesso' });
})

app.put('/bib/livro/:id', (req,res) => {
    const id = parseInt(req.params.id)
    const livro = livros.find(c => c.id_livro === id)
    
    if(!livro){
        res.status(404).send({message: "Livro não encontrado"})
        return
    }

    const livroAlterar = req.body
    const campos = Object.keys(livroAlterar)
    for (let c of campos){
        livro[c] = livroAlterar[c]
    }
    res.status(200).send({message: "Livro atualizado com sucesso"})
})

app.put('/bib/user/:id', (req,res) => {
    const id = parseInt(req.params.id)
    const pessoa = pessoas.find(c => c.id_user === id)
    
    if(!pessoa){
        res.status(404).send({message: "Pessoa não encontrada"})
        return
    }

    const pessoaAlterar = req.body
    const campos = Object.keys(pessoaAlterar)
    for (let c of campos){
        pessoa[c] = pessoaAlterar[c]
    }
    res.status(200).send({message: "Pessoa atualizada com sucesso"})
})

app.delete('/bib/livro/:id', (req,res) => {
    const id = parseInt(req.params.id)
    const indice = livros.findIndex(c => c.id_livro === id)

    if(indice === -1){
        res.status(404).send({message: "Livro não encontrado"})
    }

    const livroRemovido = livros.splice(indice,1)
    res.status(200).send("Livro deletado com sucesso")
})

app.delete('/bib/user/:id', (req,res) => {
    const id = parseInt(req.params.id)
    const indice = pessoas.findIndex(c => c.id_user === id)

    if(indice === -1){
        res.status(404).send({message: "Pessoa não encontrada"})
    }

    const pessoaRemovida = pessoas.splice(indice,1)
    res.status(200).send("Pessoa deletada com sucesso")
})

app.listen(port, () => {
  console.log("Server ligado");
});


