PORTNAME=	watermark
PORTVERSION=	2.4.3
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	IPython magic function to print date/time stamps and various system information
WWW=		https://github.com/rasbt/watermark

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}importlib-metadata>=1.4:devel/py-importlib-metadata@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}ipython>=6.0:devel/ipython@${PY_FLAVOR} \
		${PY_SETUPTOOLS}

USES=		python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

OPTIONS_DEFINE=	GPU
GPU_DESC=	GPU (Graphic Processing Unit) support

GPU_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}py3nvml>=0.2:devel/py-py3nvml@${PY_FLAVOR}

.include <bsd.port.mk>
