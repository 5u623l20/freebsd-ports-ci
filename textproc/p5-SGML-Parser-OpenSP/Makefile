PORTNAME=	SGML-Parser-OpenSP
PORTVERSION=	0.994
PORTREVISION=	4
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	cyberbotx@cyberbotx.com
COMMENT=	Parse SGML documents using OpenSP
WWW=		https://metacpan.org/release/SGML-Parser-OpenSP

# The port's README says the port "is licensed under the same terms as Perl
# itself".
LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	onsgmls:textproc/opensp \
		p5-Class-Accessor>=0:devel/p5-Class-Accessor \
		p5-Test-Exception>=0:devel/p5-Test-Exception

USES=		dos2unix perl5
USE_PERL5=	configure
CC=		${CXX}
CONFIGURE_ARGS+="INC=-I${LOCALBASE}/include"

post-patch:
	(cd ${WRKSRC} ; \
	 ${REINPLACE_CMD} "s|%%LOCALBASE%%|${LOCALBASE}|g" Makefile.PL )

.include <bsd.port.mk>
