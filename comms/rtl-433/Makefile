PORTNAME=	rtl-433
PORTVERSION=	22.11
CATEGORIES=	comms hamradio

MAINTAINER=	rodrigo@FreeBSD.org
COMMENT=	Generic RF data receiver and decoder for ISM band devices
WWW=		https://github.com/merbanan/rtl_433

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	librtlsdr.so:comms/rtl-sdr

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	merbanan
GH_PROJECT=	rtl_433

.include <bsd.port.mk>
