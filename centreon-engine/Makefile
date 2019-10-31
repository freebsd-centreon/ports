# $FreeBSD$

PORTNAME=	centreon-engine
DISTVERSION=	19.10.0
CATEGORIES=	net-mgmt

MAINTAINER=	me@luizgustavo.pro.br
COMMENT=	Centreon Engine network monitoring application. 

LICENSE=	GPLv2	
LICENSE_FILE=	${WRKSRC}/license.txt

BUILD_DEPENDS+=   centreon-clib>=19.10.0:net-mgmt/centreon-clib

USE_GITHUB=	yes
GH_ACCOUNT=	centreon
USE_RC_SUBR=    centreon-engine

CEUSER?=	centreon-engine
CEGROUP?=	centreon-engine
USERS=		${CEUSER}
GROUPS=		${CEGROUP}

USE_GCC=	yes	
USES=		cmake
CMAKE_SOURCE_PATH=	${WRKSRC}/build
CMAKE_ARGS=	-DWITH_PREFIX=${PREFIX} \
		-DWITH_PREFIX_LIB=${PREFIX}/lib/centreon-engine \
		-DWITH_PREFIX_BIN=${PREFIX}/sbin \
		-DWITH_PREFIX_CONF=${PREFIX}/etc/centreon-engine \
		-DWITH_CENTREON_CLIB_INCLUDE_DIR=${PREFIX}/include/centreon \
		-DWITH_USER=${CEUSER} \
		-DWITH_GROUP=${CEGROUP} \
		-DWITH_VAR_DIR=/var/log/centreon-engine \
		-DWITH_RW_DIR=/var/spool/centreon-engine/rw \
		-DWITH_STARTUP_DIR=${PREFIX}/etc/rc.d \
		-DWITH_PKGCONFIG_DIR=${PREFIX}/libdata/pkgconfig
USE_LDCONFIG=	yes

.include <bsd.port.mk>
