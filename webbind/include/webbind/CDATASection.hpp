#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Text.hpp"
#include "enums.hpp"


/// The CDATASection class.
/// [`CDATASection`](https://developer.mozilla.org/en-US/docs/Web/API/CDATASection)
class CDATASection : public Text {
    explicit CDATASection(Handle h) noexcept;

public:
    explicit CDATASection(const emlite::Val &val) noexcept;
    static CDATASection take_ownership(Handle h) noexcept;

    [[nodiscard]] CDATASection clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

