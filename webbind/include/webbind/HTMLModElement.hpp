#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLModElement : public HTMLElement {
    explicit HTMLModElement(Handle h) noexcept;

public:
    explicit HTMLModElement(const emlite::Val &val) noexcept;
    static HTMLModElement take_ownership(Handle h) noexcept;

    HTMLModElement clone() const noexcept;
    HTMLModElement();
    jsbind::USVString cite() const;
    void cite(const jsbind::USVString& value);
    jsbind::DOMString dateTime() const;
    void dateTime(const jsbind::DOMString& value);
};

