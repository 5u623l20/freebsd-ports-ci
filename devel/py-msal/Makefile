PORTNAME=	msal
DISTVERSION=	1.22.0
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Microsoft Authentication Library (MSAL) for Python
WWW=		https://github.com/AzureAD/microsoft-authentication-library-for-python

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=2.0.0<3:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyjwt>=1.0.0<3:www/py-pyjwt@${PY_FLAVOR}

# cryptography>=0.6<43,1
USES=		python pycryptography:run
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
