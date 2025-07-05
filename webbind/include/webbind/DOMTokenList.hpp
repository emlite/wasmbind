#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class DOMTokenList : public emlite::Val {
    explicit DOMTokenList(Handle h) noexcept;

public:
    explicit DOMTokenList(const emlite::Val &val) noexcept;
    static DOMTokenList take_ownership(Handle h) noexcept;

    DOMTokenList clone() const noexcept;
    unsigned long length() const;
    jsbind::DOMString item(unsigned long index);
    bool contains(const jsbind::DOMString& token);
    jsbind::Undefined add(const jsbind::DOMString& tokens);
    jsbind::Undefined remove(const jsbind::DOMString& tokens);
    bool toggle(const jsbind::DOMString& token);
    bool toggle(const jsbind::DOMString& token, bool force);
    bool replace(const jsbind::DOMString& token, const jsbind::DOMString& newToken);
    bool supports(const jsbind::DOMString& token);
    jsbind::DOMString value() const;
    void value(const jsbind::DOMString& value);
};

