FROM nginx:latest

WORKDIR /home/

# Копирование файлов в контейнер
COPY ./server.c /home/server.c
COPY ./run.sh /home/run.sh

# Обновление пакетов, установка необходимого программного обеспечения и очистка кэша apt-get
RUN apt-get update && \
    apt-get install -y gcc spawn-fcgi libfcgi-dev && \
    rm -rf /var/lib/apt/lists/* && \
    groupadd -r myuser && \
    useradd -r -g myuser -d /home -s /bin/bash myuser && \
    chown -R myuser:myuser /home


USER myuser

ENTRYPOINT ["sh", "./run.sh"]

HEALTHCHECK NONE