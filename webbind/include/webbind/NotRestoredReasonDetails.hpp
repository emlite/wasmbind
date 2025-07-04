#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class NotRestoredReasonDetails : public emlite::Val {
    explicit NotRestoredReasonDetails(Handle h) noexcept;

public:
    explicit NotRestoredReasonDetails(const emlite::Val &val) noexcept;
    static NotRestoredReasonDetails take_ownership(Handle h) noexcept;

    NotRestoredReasonDetails clone() const noexcept;
    jsbind::DOMString reason() const;
    jsbind::Object toJSON();
};

