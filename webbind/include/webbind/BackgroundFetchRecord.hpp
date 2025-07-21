#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Request;
class Response;


class BackgroundFetchRecord : public emlite::Val {
    explicit BackgroundFetchRecord(Handle h) noexcept;

public:
    explicit BackgroundFetchRecord(const emlite::Val &val) noexcept;
    static BackgroundFetchRecord take_ownership(Handle h) noexcept;

    BackgroundFetchRecord clone() const noexcept;
    Request request() const;
    jsbind::Promise<Response> responseReady() const;
};

