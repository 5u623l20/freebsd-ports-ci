PORTNAME=	pserv
PORTVERSION=	3.4
CATEGORIES=	www
MASTER_SITES=	SF
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	ale@FreeBSD.org
COMMENT=	Portable and small web server written in C
WWW=		https://sourceforge.net/projects/pserv/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

DEPRECATED=	Abandonware, last release in 2005. Consider migrating to www/apache24 , www/lighttpd or www/nginx
EXPIRATION_DATE=2023-09-30

GNU_CONFIGURE=	yes

CONFLICTS=	popular

OPTIONS_DEFINE=	LOG PHP
OPTIONS_DEFAULT=	LOG PHP
LOG_DESC=	Enable loggin

PHP_USES=	php:cgi

post-patch:
	@${REINPLACE_CMD} "s|%%PREFIX%%|${PREFIX}|g;s|%%LOCALBASE%%|${LOCALBASE}|g" \
		${WRKSRC}/defaults/pserv.conf ${WRKSRC}/sources/main.h

post-patch-LOG-off:
	@${REINPLACE_CMD} "s|define LOG|undef LOG|" \
		${WRKSRC}/sources/main.h

post-patch-PHP-off:
	@${REINPLACE_CMD} "s|define PHP|undef PHP|" \
		${WRKSRC}/sources/main.h

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/sources/pserv ${STAGEDIR}${PREFIX}/sbin/
	${MKDIR} ${STAGEDIR}${PREFIX}/etc/pserv
	${INSTALL_DATA} ${WRKSRC}/defaults/mime_types.dat ${STAGEDIR}${PREFIX}/etc/pserv/mime.types
	${INSTALL_DATA} ${WRKSRC}/defaults/pserv.conf ${STAGEDIR}${PREFIX}/etc/pserv/pserv.conf.sample
	${INSTALL_SCRIPT} ${FILESDIR}/pserv.sh ${STAGEDIR}${PREFIX}/etc/rc.d/

.include <bsd.port.mk>
