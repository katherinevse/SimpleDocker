FROM nginx:latest

WORKDIR /home/

# Копирование файлов в контейнер
COPY ./nginx/nginx.conf /etc/nginx/nginx.conf
COPY ./server.c /home/server.c
COPY ./run.sh /home/run.sh

# Обновление пакетов, установка необходимого программного обеспечения и очистка кэша apt-get
RUN apt-get update && \
    apt-get install -y gcc spawn-fcgi libfcgi-dev && \
    rm -rf /var/lib/apt/lists/* && \
    groupadd -r myuser && \
    useradd -r -g myuser -d /home -s /bin/bash myuser && \
    chown -R myuser:myuser /home


# Переключение на пользователя myuser для безопасности
USER myuser

# Определение точки входа
ENTRYPOINT ["sh", "./run.sh"]

# Отключение HEALTHCHECK, если не требуется
HEALTHCHECK NONE