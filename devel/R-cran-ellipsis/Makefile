PORTNAME=	ellipsis
PORTVERSION=	0.3.2
PORTREVISION=	1
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Powerful tool for extending functions
WWW=		https://cran.r-project.org/web/packages/ellipsis/

LICENSE=	GPLv3

CRAN_DEPENDS=	R-cran-rlang>=0.3.0:devel/R-cran-rlang
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
