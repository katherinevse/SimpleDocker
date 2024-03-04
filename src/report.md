## Part 1. Готовый докер
1.1 Взять официальный докер образ с nginx и выкачать его при помощи docker pull
```
команда - docker pull nginx
```
![](png/1.png)

1.2 Проверить наличие докер образа через docker images
``` 
команда - docker images
```
![](png/2.png)

1.3 Запустить докер образ через docker run -d [image_id|repository]
``` 
команда - docker run -d 760b7cbba31e
```
![](png/3.png)

1.4 Проверить, что образ запустился через docker ps
``` 
команда - docker ps
```
![](png/4.png)

1.5 Посмотреть информацию о контейнере через docker inspect [container_id|container_name]
``` 
команда - docker inspect b36553438506
```
![](png/5.png)
По выводу команды определи и помести в отчёт 

`размер контейнера`,
![](png/6.png)


`список замапленных портов` 
![](png/7.png)


`ip контейнера`
![](png/8.png)
