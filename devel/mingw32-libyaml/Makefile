PORTNAME=	libyaml
PORTVERSION=	0.1.6
PORTREVISION=	3
CATEGORIES=	devel textproc
MASTER_SITES=	http://pyyaml.org/download/libyaml/
PKGNAMEPREFIX=	mingw32-
DISTNAME=	yaml-${PORTVERSION}
DIST_SUBDIR=	repacked

MAINTAINER=	ports@FreeBSD.org
COMMENT=	The libyaml library cross-compiled for MinGW32
WWW=		https://pyyaml.org/wiki/LibYAML

BUILD_DEPENDS=	${PKGNAMEPREFIX}gcc:devel/${PKGNAMEPREFIX}gcc \
		${LOCALBASE}/mingw32/include/stdlib.h:devel/${PKGNAMEPREFIX}bin-msvcrt

GNU_CONFIGURE=	yes
GNU_CONFIGURE_PREFIX=	${PREFIX}/mingw32
CONFIGURE_ARGS=	--host="mingw32"
CC=		${PKGNAMEPREFIX}gcc
CFLAGS=		-O3	# Override CFLAGS for a cross-build
SSP_CFLAGS?=	-fstack-protector # XXX -strong isn't supported by GCC < 4.9
USES=		cpe libtool
CPE_VENDOR=	pyyaml

.include <bsd.port.mk>
