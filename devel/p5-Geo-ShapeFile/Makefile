PORTNAME=	Geo-ShapeFile
PORTVERSION=	3.03
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Extension for handling ESRI GIS Shapefiles
WWW=		https://metacpan.org/pod/Geo::ShapeFile

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Tree-R>0:devel/p5-Tree-R \
		p5-autovivification>0:devel/p5-autovivification
TEST_DEPENDS=	p5-Test-Exception>0:devel/p5-Test-Exception

NO_ARCH=	yes
USES=		dos2unix perl5
DOS2UNIX_GLOB=	*.pm *.pl *.t
USE_PERL5=	configure

.include <bsd.port.mk>
