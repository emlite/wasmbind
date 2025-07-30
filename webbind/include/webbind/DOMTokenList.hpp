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
    jsbind::String item(unsigned long index);
    bool contains(const jsbind::String& token);
    jsbind::Undefined add(const jsbind::String& tokens);
    jsbind::Undefined remove(const jsbind::String& tokens);
    bool toggle(const jsbind::String& token);
    bool toggle(const jsbind::String& token, bool force);
    bool replace(const jsbind::String& token, const jsbind::String& newToken);
    bool supports(const jsbind::String& token);
    jsbind::String value() const;
    void value(const jsbind::String& value);
};

