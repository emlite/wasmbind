#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "NodeList.hpp"
#include "enums.hpp"


class RadioNodeList : public NodeList {
    explicit RadioNodeList(Handle h) noexcept;

public:
    explicit RadioNodeList(const emlite::Val &val) noexcept;
    static RadioNodeList take_ownership(Handle h) noexcept;

    RadioNodeList clone() const noexcept;
    jsbind::DOMString value() const;
    void value(const jsbind::DOMString& value);
};

