## Inverte, Maiúsculas e minúsculas.

É bobo, mas quebra um galho quando precisar ...


Crie um diretório para o binário, pode ser na home, talvez .tools:
```sh
$ mkdir ~/.tools
```

Mova o binário para lá
```sh
$ mv <binário> ~/.tools
```

Abra o .bashrc e exporte o caminho do binário:
```sh
$ export PATH=$HOME/.tools
```

Agora recarregue seu .bashrc:
```sh
$ source ~/.bashrc
```

Agora dá para invocar ele pela linha de comando, independente do diretório ;)
