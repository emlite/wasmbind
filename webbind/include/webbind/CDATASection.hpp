#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Text.hpp"
#include "enums.hpp"


class CDATASection : public Text {
    explicit CDATASection(Handle h) noexcept;

public:
    explicit CDATASection(const emlite::Val &val) noexcept;
    static CDATASection take_ownership(Handle h) noexcept;

    CDATASection clone() const noexcept;
};

