PORTNAME=	textile
PORTVERSION=	4.0.2
CATEGORIES=	www textproc python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Textile markup generator written in Python
WWW=		https://github.com/textile/python-textile/releases

LICENSE=	BSD2CLAUSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest-runner>0:devel/py-pytest-runner@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytest>=2.8:devel/py-pytest@${PY_FLAVOR}

USES=		python
USE_GITHUB=	yes
USE_PYTHON=	distutils autoplist

NO_ARCH=	yes
GH_ACCOUNT=	${PORTNAME}
GH_PROJECT=	python-${PORTNAME}

.include <bsd.port.mk>
