#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLBaseElement : public HTMLElement {
    explicit HTMLBaseElement(Handle h) noexcept;

public:
    explicit HTMLBaseElement(const emlite::Val &val) noexcept;
    static HTMLBaseElement take_ownership(Handle h) noexcept;

    HTMLBaseElement clone() const noexcept;
    HTMLBaseElement();
    jsbind::USVString href() const;
    void href(const jsbind::USVString& value);
    jsbind::DOMString target() const;
    void target(const jsbind::DOMString& value);
};

