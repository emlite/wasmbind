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
    jsbind::Promise<jsbind::Undefined> closed() const;
    double desiredSize() const;
    jsbind::Promise<jsbind::Undefined> ready() const;
    jsbind::Promise<jsbind::Undefined> abort();
    jsbind::Promise<jsbind::Undefined> abort(const jsbind::Any& reason);
    jsbind::Promise<jsbind::Undefined> close();
    jsbind::Undefined releaseLock();
    jsbind::Promise<jsbind::Undefined> write();
    jsbind::Promise<jsbind::Undefined> write(const jsbind::Any& chunk);
};

