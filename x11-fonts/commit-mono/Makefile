PORTNAME=	commit-mono
DISTVERSION=	1.135
CATEGORIES=	x11-fonts
MASTER_SITES=	https://github.com/eigilnikolajsen/commit-mono/releases/download/${DISTVERSION}/
DISTNAME=	CommitMono-${DISTVERSION}

MAINTAINER=	lcook@FreeBSD.org
COMMENT=	Neutral programming typeface
WWW=		https://commitmono.com

LICENSE=	OFL11

USES=		fonts zip
FONTNAME=	CommitMono

NO_ARCH=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/*.otf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
