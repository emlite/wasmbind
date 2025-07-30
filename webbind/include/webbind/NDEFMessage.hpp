#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class NDEFRecord;


class NDEFMessage : public emlite::Val {
    explicit NDEFMessage(Handle h) noexcept;

public:
    explicit NDEFMessage(const emlite::Val &val) noexcept;
    static NDEFMessage take_ownership(Handle h) noexcept;

    NDEFMessage clone() const noexcept;
    NDEFMessage(const jsbind::Any& messageInit);
    jsbind::TypedArray<NDEFRecord> records() const;
};

