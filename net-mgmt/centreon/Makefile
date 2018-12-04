# $FreeBSD$

PORTNAME=	centreon
DISTVERSION=	18.10.0
CATEGORIES=	net-mgmt www

MAINTAINER=	me@luizgustavo.pro.br
COMMENT=	Centreon Web

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS+=   rrdtool:databases/rrdtool \
				p5-DBD-mysql>=0:databases/p5-DBD-mysql \
				${LOCALBASE}bin/mysql:databases/mariadb103-client

USE_GITHUB=	yes
GH_ACCOUNT=	centreon

NO_BUILD=	yes
NO_ARCH=	yes

USES=		php:build
USE_PHP=	ctype dom gd gettext hash json openssl session sockets

SUB_FILES=	pkg-message
SUB_LIST=	WWWDIR=${WWWDIR} \
		ETCDIR=${ETCDIR}

PLIST_SUB=	WWWOWN=${WWWOWN} \
		WWWGRP=${WWWGRP}

OPTIONS_DEFINE=		LDAP CENGINE MARIADB
OPTIONS_DEFAULT=	LDAP
OPTIONS_RADIO=      WEBSERVER
OPTIONS_RADIO_WEBSERVER=	APACHE22 NGINX

CENGINE_DESC=	Use local Centreon Engine (Poller)
MARIADB_DESC=   Use local MariaDB server
APACHE22_DESC=	Use with Apache Web server
NGINX_DESC=		Use with Nginx Web server

MARIADB_USE=	mariadb103-server
LDAP_USE=	PHP=ldap


.include <bsd.port.mk>
