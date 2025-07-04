#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class WritableStream;


class WritableStreamDefaultWriter : public emlite::Val {
    explicit WritableStreamDefaultWriter(Handle h) noexcept;

public:
    explicit WritableStreamDefaultWriter(const emlite::Val &val) noexcept;
    static WritableStreamDefaultWriter take_ownership(Handle h) noexcept;

    WritableStreamDefaultWriter clone() const noexcept;
    WritableStreamDefaultWriter(const WritableStream& stream);
    jsbind::Promise closed() const;
    double desiredSize() const;
    jsbind::Promise ready() const;
    jsbind::Promise abort(const jsbind::Any& reason);
    jsbind::Promise close();
    jsbind::Undefined releaseLock();
    jsbind::Promise write(const jsbind::Any& chunk);
};

