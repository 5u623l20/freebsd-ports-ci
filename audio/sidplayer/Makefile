PORTNAME=	sidplayer
PORTVERSION=	4.4
PORTREVISION=	9
CATEGORIES=	audio
MASTER_SITES=	http://sidplayer.cebix.net/downloads/ \
		LOCAL/ehaupt
DISTNAME=	SIDPlayer-${PORTVERSION}

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	C64 SID tune player
WWW=		https://sidplayer.cebix.net/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		sdl
USE_CXXSTD=	c++14
USE_SDL=	sdl
GNU_CONFIGURE=	yes

OPTIONS_DEFINE=	DOCS
OPTIONS_SUB=	yes
SUB_FILES=	pkg-message

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/PSID\ Demo/* ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
