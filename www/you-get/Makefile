PORTNAME=	you-get
PORTVERSION=	0.4.1650
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	PYPI

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Dumb downloader that scrapes the web
WWW=		https://you-get.org/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	ffmpeg:multimedia/ffmpeg

USES=		python
USE_PYTHON=	autoplist distutils noflavors

NO_ARCH=	yes

OPTIONS_DEFINE=	RTMPDUMP SOCKS
SOCKS_DESC=	SOCKS support

RTMPDUMP_RUN_DEPENDS=	rtmpdump:multimedia/rtmpdump
SOCKS_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pysocks>=0:net/py-pysocks@${PY_FLAVOR}

.include <bsd.port.mk>
