#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class ReadableStreamBYOBRequest : public emlite::Val {
    explicit ReadableStreamBYOBRequest(Handle h) noexcept;

public:
    explicit ReadableStreamBYOBRequest(const emlite::Val &val) noexcept;
    static ReadableStreamBYOBRequest take_ownership(Handle h) noexcept;

    ReadableStreamBYOBRequest clone() const noexcept;
    jsbind::Any view() const;
    jsbind::Undefined respond(long long bytesWritten);
    jsbind::Undefined respondWithNewView(const jsbind::Any& view);
};

