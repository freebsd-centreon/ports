# $FreeBSD$

PORTNAME=	centreon-clib
DISTVERSION=	18.10.0
CATEGORIES=	net-mgmt

MAINTAINER=	me@luizgustavo.pro.br
COMMENT=	Common library of all Centreon projects written in C or C++

LICENSE=	APACHE20	
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	centreon

USES=		cmake
USE_GCC=	yes	
CMAKE_SOURCE_PATH=	${WRKSRC}/build
CMAKE_ARGS=	-DWITH_PREFIX=${PREFIX} \
		-DWITH_PREFIX_LIB=${PREFIX}/lib \
		-DWITH_PREFIX_INC=${PREFIX}/include/centreon \
		-DWITH_PKGCONFIG_DIR=${PREFIX}/libdata/pkgconfig
USE_LDCONFIG=	yes


.include <bsd.port.mk>
