#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ReadableStreamBYOBRequest;


class ReadableByteStreamController : public emlite::Val {
    explicit ReadableByteStreamController(Handle h) noexcept;

public:
    explicit ReadableByteStreamController(const emlite::Val &val) noexcept;
    static ReadableByteStreamController take_ownership(Handle h) noexcept;

    ReadableByteStreamController clone() const noexcept;
    ReadableStreamBYOBRequest byobRequest() const;
    double desiredSize() const;
    jsbind::Undefined close();
    jsbind::Undefined enqueue(const jsbind::Any& chunk);
    jsbind::Undefined error(const jsbind::Any& e);
};

