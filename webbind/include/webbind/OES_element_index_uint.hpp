#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The OES_element_index_uint class.
/// [`OES_element_index_uint`](https://developer.mozilla.org/en-US/docs/Web/API/OES_element_index_uint)
class OES_element_index_uint : public emlite::Val {
    explicit OES_element_index_uint(Handle h) noexcept;

public:
    explicit OES_element_index_uint(const emlite::Val &val) noexcept;
    static OES_element_index_uint take_ownership(Handle h) noexcept;

    [[nodiscard]] OES_element_index_uint clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

