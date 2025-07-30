#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class NotRestoredReasonDetails;
class NotRestoredReasons;


class NotRestoredReasons : public emlite::Val {
    explicit NotRestoredReasons(Handle h) noexcept;

public:
    explicit NotRestoredReasons(const emlite::Val &val) noexcept;
    static NotRestoredReasons take_ownership(Handle h) noexcept;

    NotRestoredReasons clone() const noexcept;
    jsbind::String src() const;
    jsbind::String id() const;
    jsbind::String name() const;
    jsbind::String url() const;
    jsbind::TypedArray<NotRestoredReasonDetails> reasons() const;
    jsbind::TypedArray<NotRestoredReasons> children() const;
    jsbind::Object toJSON();
};

