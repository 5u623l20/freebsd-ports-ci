PORTNAME=	leveldb
PORTVERSION=	0.201
CATEGORIES=	databases python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Thread-safe Python binding for LevelDB
WWW=		https://github.com/rjpower/py-leveldb

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libleveldb.so:databases/leveldb

USES=		compiler:c11 localbase python
USE_PYTHON=	autoplist concurrent distutils

post-patch:
	@${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|' ${WRKSRC}/setup.py
	@${RM} -r ${WRKSRC}/leveldb/ ${WRKSRC}/snappy/

post-install:
	${FIND} ${STAGEDIR}${PYTHON_SITELIBDIR} -name '*.so' -exec ${STRIP_CMD} {} +

.include <bsd.port.mk>
