## Inverte Maiúsculas para  minúsculas e vice-versa.

### atenção: funciona somente com o padrão ascii.

#### Primeiro, compile:

```sh
$ cc upper_lower_case.c -o <output> -Wall
```

#### Crie um diretório para o binário, de preferência na home, chamado ".tools":
```sh
$ mkdir ~/.tools
```

#### Moa o binário para lá:
```sh
$ mv <binário> ~/.tools
```

#### Abra o arquivo ".bashrc", que está na home, e exporte o caminho do binário:
```sh
$ export PATH=$HOME/.tools
```
#### Agora recarregue seu .bashrc:
```sh
$ source ~/.bashrc
```

## Formas de usar:

### fornecendo o texto diretamente: 
```sh
$ upper_lower_case "Qualquer texto"
```
### ou a saída de um arquivo:
```sh
$ upper_lower_case $(cat texto.de.exemplo)
```
Bom proveito .__."

