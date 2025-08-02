#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class LockOptions;
class LockManagerSnapshot;
class AbortSignal;


class LockOptions : public emlite::Val {
  explicit LockOptions(Handle h) noexcept;
public:
    static LockOptions take_ownership(Handle h) noexcept;
    explicit LockOptions(const emlite::Val &val) noexcept;
    LockOptions() noexcept;
    [[nodiscard]] LockOptions clone() const noexcept;
    [[nodiscard]] LockMode mode() const;
    void mode(const LockMode& value);
    [[nodiscard]] bool ifAvailable() const;
    void ifAvailable(bool value);
    [[nodiscard]] bool steal() const;
    void steal(bool value);
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

class LockManagerSnapshot : public emlite::Val {
  explicit LockManagerSnapshot(Handle h) noexcept;
public:
    static LockManagerSnapshot take_ownership(Handle h) noexcept;
    explicit LockManagerSnapshot(const emlite::Val &val) noexcept;
    LockManagerSnapshot() noexcept;
    [[nodiscard]] LockManagerSnapshot clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> held() const;
    void held(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> pending() const;
    void pending(const jsbind::TypedArray<jsbind::Any>& value);
};

/// The LockManager class.
/// [`LockManager`](https://developer.mozilla.org/en-US/docs/Web/API/LockManager)
class LockManager : public emlite::Val {
    explicit LockManager(Handle h) noexcept;

public:
    explicit LockManager(const emlite::Val &val) noexcept;
    static LockManager take_ownership(Handle h) noexcept;

    [[nodiscard]] LockManager clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The request method.
    /// [`LockManager.request`](https://developer.mozilla.org/en-US/docs/Web/API/LockManager/request)
    jsbind::Promise<jsbind::Any> request(const jsbind::String& name, const LockOptions& options, const jsbind::Function& callback);
    /// The query method.
    /// [`LockManager.query`](https://developer.mozilla.org/en-US/docs/Web/API/LockManager/query)
    jsbind::Promise<LockManagerSnapshot> query();
};

