#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class OES_element_index_uint : public emlite::Val {
    explicit OES_element_index_uint(Handle h) noexcept;

public:
    explicit OES_element_index_uint(const emlite::Val &val) noexcept;
    static OES_element_index_uint take_ownership(Handle h) noexcept;

    OES_element_index_uint clone() const noexcept;
};

