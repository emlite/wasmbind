#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class WritableStreamDefaultWriter;


class WritableStream : public emlite::Val {
    explicit WritableStream(Handle h) noexcept;

public:
    explicit WritableStream(const emlite::Val &val) noexcept;
    static WritableStream take_ownership(Handle h) noexcept;

    WritableStream clone() const noexcept;
    WritableStream();
    WritableStream(const jsbind::Object& underlyingSink);
    WritableStream(const jsbind::Object& underlyingSink, const jsbind::Any& strategy);
    bool locked() const;
    jsbind::Promise abort();
    jsbind::Promise abort(const jsbind::Any& reason);
    jsbind::Promise close();
    WritableStreamDefaultWriter getWriter();
};

