PORTNAME=	mptd
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	https://www.glenbarber.us/ports/${CATEGORIES}/${PORTNAME}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Monitoring daemon for mpt RAID controllers
WWW=		https://www.freebsd.org/

LICENSE=	BSD2CLAUSE

USE_RC_SUBR=	mptd
PLIST_FILES+=	sbin/mptd

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/mptd ${STAGEDIR}${PREFIX}/sbin/mptd

.include <bsd.port.mk>
