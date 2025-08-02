#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Request;
class Response;


/// The BackgroundFetchRecord class.
/// [`BackgroundFetchRecord`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRecord)
class BackgroundFetchRecord : public emlite::Val {
    explicit BackgroundFetchRecord(Handle h) noexcept;

public:
    explicit BackgroundFetchRecord(const emlite::Val &val) noexcept;
    static BackgroundFetchRecord take_ownership(Handle h) noexcept;

    [[nodiscard]] BackgroundFetchRecord clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `request` attribute.
    /// [`BackgroundFetchRecord.request`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRecord/request)
    [[nodiscard]] Request request() const;
    /// Getter of the `responseReady` attribute.
    /// [`BackgroundFetchRecord.responseReady`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchRecord/responseReady)
    [[nodiscard]] jsbind::Promise<Response> responseReady() const;
};

