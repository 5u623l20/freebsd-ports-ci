PORTNAME=	re
PORTVERSION=	198.00
DISTVERSIONPREFIX=	v
PORTREVISION=	3
CATEGORIES=	net
PKGNAMEPREFIX=	realtek-
PKGNAMESUFFIX=	-kmod

MAINTAINER=	ale@FreeBSD.org
COMMENT=	Kernel driver for Realtek PCIe Ethernet Controllers
WWW=		https://github.com/alexdupre/rtl_bsd_drv

LICENSE=	BSD4CLAUSE

USES=		kmod tar:tgz uidfix

USE_GITHUB=	yes
GH_ACCOUNT=	alexdupre
GH_PROJECT=	rtl_bsd_drv
GH_TAGNAME=	d3a7a3d

PLIST_FILES=	${KMODDIR}/if_re.ko

.include <bsd.port.mk>
