PORTNAME=	pwauth
PORTVERSION=	2.3.11
CATEGORIES=	security www
MASTER_SITES=	http://www.unixpapa.com/software/ \
		https://storage.googleapis.com/google-code-archive-downloads/v2/code.google.com/pwauth/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Unix Web Authenticator
WWW=		https://code.google.com/p/pwauth/

LICENSE=	BSD3CLAUSE

PLIST_FILES=	"@(,,4555) bin/pwauth" \
		bin/checkfaillog

ALL_TARGET=	pwauth checkfaillog
MAKE_ARGS=	CC="${CC}" CFLAGS="${CFLAGS}" LIB="-lcrypt -lpam"

WWWUID=		`${ID} -u ${WWWOWN}`
MINUID?=	1000

post-patch:
	@${REINPLACE_CMD} "s/%%UIDS%%/${WWWUID}/ ; \
		s/%%MINUID%%/${MINUID}/" ${WRKSRC}/config.h

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/pwauth ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/checkfaillog ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
