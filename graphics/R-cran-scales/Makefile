PORTNAME=	scales
PORTVERSION=	1.2.1
PORTREVISION=	1
CATEGORIES=	graphics
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Scale functions for graphics
WWW=		https://cran.r-project.org/web/packages/scales/

LICENSE=	MIT

CRAN_DEPENDS=	R-cran-farver>=2.0.3:graphics/R-cran-farver \
		R-cran-labeling>0:math/R-cran-labeling \
		R-cran-lifecycle>0:devel/R-cran-lifecycle \
		R-cran-munsell>=0.5:graphics/R-cran-munsell \
		R-cran-R6>0:devel/R-cran-R6 \
		R-cran-RColorBrewer>0:graphics/R-cran-RColorBrewer \
		R-cran-rlang>=1.0.0:devel/R-cran-rlang \
		R-cran-viridisLite>0:graphics/R-cran-viridisLite
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=	cran:auto-plist,compiles

.include <bsd.port.mk>
