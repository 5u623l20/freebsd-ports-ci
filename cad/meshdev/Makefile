PORTNAME=	meshdev
PORTVERSION=	0.5
PORTREVISION=	1
CATEGORIES=	cad
MASTER_SITES=	LOCAL/gahr \
		http://people.freebsd.org/~gahr/distfiles/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Mesh comparison software
WWW=		http://meshdev.sourceforge.net/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/Copying.txt

USES=		dos2unix
DOS2UNIX_FILES=	src/MeshDev.h

BUILD_WRKSRC=	${WRKSRC}/build
INSTALL_WRKSRC=	${WRKSRC}/bin

MAKEFILE=	Makefile.release.gcc

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${INSTALL_WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
