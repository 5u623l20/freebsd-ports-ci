PORTNAME=	camomile
PORTVERSION=	1.0.2
PORTREVISION=	1
CATEGORIES=	devel
PKGNAMEPREFIX=	ocaml-

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Comprehensive Unicode library for Objective Caml
WWW=		http://camomile.sourceforge.net/

LICENSE=	LGPL21

BUILD_DEPENDS=	dune:devel/ocaml-dune

USES=		gmake
USE_GITHUB=	yes
GH_ACCOUNT=	yoriyuki
GH_PROJECT=	Camomile
USE_OCAML=	yes

MAKE_ENV=	LIBDIR="${PREFIX}/${OCAML_SITELIBDIR}"
DOCSDIR=	${OCAML_DOCSDIR}/${PORTNAME}

PORTDOCS=	CHANGES.md LICENSE.md README.md

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e '/^INSTALL_ARGS/ \
		s:$$: $$(if $$(LIBDIR),--libdir $$(LIBDIR),):' \
		${WRKSRC}/Makefile
	@${REINPLACE_CMD} -e 's,(\*\*,(*,' \
		${WRKSRC}/Camomile/public/uCharInfo.mli \
		${WRKSRC}/Camomile/public/stringPrep.ml*

.include <bsd.port.mk>
