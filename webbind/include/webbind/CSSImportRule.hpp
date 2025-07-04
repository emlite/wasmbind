#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"

class MediaList;
class CSSStyleSheet;


class CSSImportRule : public CSSRule {
    explicit CSSImportRule(Handle h) noexcept;

public:
    explicit CSSImportRule(const emlite::Val &val) noexcept;
    static CSSImportRule take_ownership(Handle h) noexcept;

    CSSImportRule clone() const noexcept;
    jsbind::USVString href() const;
    MediaList media() const;
    CSSStyleSheet styleSheet() const;
    jsbind::CSSOMString layerName() const;
    jsbind::CSSOMString supportsText() const;
};

