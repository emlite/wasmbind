#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "window.hpp"
#include "enums.hpp"

class Document;
class Location;
class History;
class Navigation;
class CustomElementRegistry;
class BarProp;
class Element;
class Navigator;
class WindowPostMessageOptions;
class CookieStore;
class Viewport;
class MediaQueryList;
class Screen;
class VisualViewport;
class CSSStyleDeclaration;
class DigitalGoodsService;
class DocumentPictureInPicture;
class Fence;
class FileSystemFileHandle;
class OpenFilePickerOptions;
class SaveFilePickerOptions;
class FileSystemDirectoryHandle;
class DirectoryPickerOptions;
class External;
class FontData;
class QueryOptions;
class PortalHost;
class IdleRequestOptions;
class Selection;
class SharedStorage;
class SpeechSynthesis;
class LaunchQueue;
class ScreenDetails;
class Crypto;
class Storage;


class WindowPostMessageOptions : public emlite::Val {
  explicit WindowPostMessageOptions(Handle h) noexcept;
public:
    static WindowPostMessageOptions take_ownership(Handle h) noexcept;
    explicit WindowPostMessageOptions(const emlite::Val &val) noexcept;
    WindowPostMessageOptions() noexcept;
    [[nodiscard]] WindowPostMessageOptions clone() const noexcept;
    [[nodiscard]] jsbind::String targetOrigin() const;
    void targetOrigin(const jsbind::String& value);
};

class OpenFilePickerOptions : public emlite::Val {
  explicit OpenFilePickerOptions(Handle h) noexcept;
public:
    static OpenFilePickerOptions take_ownership(Handle h) noexcept;
    explicit OpenFilePickerOptions(const emlite::Val &val) noexcept;
    OpenFilePickerOptions() noexcept;
    [[nodiscard]] OpenFilePickerOptions clone() const noexcept;
    [[nodiscard]] bool multiple() const;
    void multiple(bool value);
};

class SaveFilePickerOptions : public emlite::Val {
  explicit SaveFilePickerOptions(Handle h) noexcept;
public:
    static SaveFilePickerOptions take_ownership(Handle h) noexcept;
    explicit SaveFilePickerOptions(const emlite::Val &val) noexcept;
    SaveFilePickerOptions() noexcept;
    [[nodiscard]] SaveFilePickerOptions clone() const noexcept;
    [[nodiscard]] jsbind::String suggestedName() const;
    void suggestedName(const jsbind::String& value);
};

class DirectoryPickerOptions : public emlite::Val {
  explicit DirectoryPickerOptions(Handle h) noexcept;
public:
    static DirectoryPickerOptions take_ownership(Handle h) noexcept;
    explicit DirectoryPickerOptions(const emlite::Val &val) noexcept;
    DirectoryPickerOptions() noexcept;
    [[nodiscard]] DirectoryPickerOptions clone() const noexcept;
    [[nodiscard]] jsbind::String id() const;
    void id(const jsbind::String& value);
    [[nodiscard]] jsbind::Any startIn() const;
    void startIn(const jsbind::Any& value);
    [[nodiscard]] FileSystemPermissionMode mode() const;
    void mode(const FileSystemPermissionMode& value);
};

class QueryOptions : public emlite::Val {
  explicit QueryOptions(Handle h) noexcept;
public:
    static QueryOptions take_ownership(Handle h) noexcept;
    explicit QueryOptions(const emlite::Val &val) noexcept;
    QueryOptions() noexcept;
    [[nodiscard]] QueryOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::String> postscriptNames() const;
    void postscriptNames(const jsbind::TypedArray<jsbind::String>& value);
};

class IdleRequestOptions : public emlite::Val {
  explicit IdleRequestOptions(Handle h) noexcept;
public:
    static IdleRequestOptions take_ownership(Handle h) noexcept;
    explicit IdleRequestOptions(const emlite::Val &val) noexcept;
    IdleRequestOptions() noexcept;
    [[nodiscard]] IdleRequestOptions clone() const noexcept;
    [[nodiscard]] unsigned long timeout() const;
    void timeout(unsigned long value);
};

/// The Window class.
/// [`Window`](https://developer.mozilla.org/en-US/docs/Web/API/Window)
class Window : public EventTarget {
    explicit Window(Handle h) noexcept;

public:
    explicit Window(const emlite::Val &val) noexcept;
    static Window take_ownership(Handle h) noexcept;

    [[nodiscard]] Window clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `window` attribute.
    /// [`Window.window`](https://developer.mozilla.org/en-US/docs/Web/API/Window/window)
    [[nodiscard]] jsbind::Any window() const;
    /// Getter of the `self` attribute.
    /// [`Window.self`](https://developer.mozilla.org/en-US/docs/Web/API/Window/self)
    [[nodiscard]] jsbind::Any self() const;
    /// Getter of the `document` attribute.
    /// [`Window.document`](https://developer.mozilla.org/en-US/docs/Web/API/Window/document)
    [[nodiscard]] Document document() const;
    /// Getter of the `name` attribute.
    /// [`Window.name`](https://developer.mozilla.org/en-US/docs/Web/API/Window/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`Window.name`](https://developer.mozilla.org/en-US/docs/Web/API/Window/name)
    void name(const jsbind::String& value);
    /// Getter of the `location` attribute.
    /// [`Window.location`](https://developer.mozilla.org/en-US/docs/Web/API/Window/location)
    [[nodiscard]] jsbind::Any location() const;
    /// Getter of the `history` attribute.
    /// [`Window.history`](https://developer.mozilla.org/en-US/docs/Web/API/Window/history)
    [[nodiscard]] History history() const;
    /// Getter of the `navigation` attribute.
    /// [`Window.navigation`](https://developer.mozilla.org/en-US/docs/Web/API/Window/navigation)
    [[nodiscard]] Navigation navigation() const;
    /// Getter of the `customElements` attribute.
    /// [`Window.customElements`](https://developer.mozilla.org/en-US/docs/Web/API/Window/customElements)
    [[nodiscard]] CustomElementRegistry customElements() const;
    /// Getter of the `locationbar` attribute.
    /// [`Window.locationbar`](https://developer.mozilla.org/en-US/docs/Web/API/Window/locationbar)
    [[nodiscard]] BarProp locationbar() const;
    /// Getter of the `menubar` attribute.
    /// [`Window.menubar`](https://developer.mozilla.org/en-US/docs/Web/API/Window/menubar)
    [[nodiscard]] BarProp menubar() const;
    /// Getter of the `personalbar` attribute.
    /// [`Window.personalbar`](https://developer.mozilla.org/en-US/docs/Web/API/Window/personalbar)
    [[nodiscard]] BarProp personalbar() const;
    /// Getter of the `scrollbars` attribute.
    /// [`Window.scrollbars`](https://developer.mozilla.org/en-US/docs/Web/API/Window/scrollbars)
    [[nodiscard]] BarProp scrollbars() const;
    /// Getter of the `statusbar` attribute.
    /// [`Window.statusbar`](https://developer.mozilla.org/en-US/docs/Web/API/Window/statusbar)
    [[nodiscard]] BarProp statusbar() const;
    /// Getter of the `toolbar` attribute.
    /// [`Window.toolbar`](https://developer.mozilla.org/en-US/docs/Web/API/Window/toolbar)
    [[nodiscard]] BarProp toolbar() const;
    /// Getter of the `status` attribute.
    /// [`Window.status`](https://developer.mozilla.org/en-US/docs/Web/API/Window/status)
    [[nodiscard]] jsbind::String status() const;
    /// Setter of the `status` attribute.
    /// [`Window.status`](https://developer.mozilla.org/en-US/docs/Web/API/Window/status)
    void status(const jsbind::String& value);
    /// The close method.
    /// [`Window.close`](https://developer.mozilla.org/en-US/docs/Web/API/Window/close)
    jsbind::Undefined close();
    /// Getter of the `closed` attribute.
    /// [`Window.closed`](https://developer.mozilla.org/en-US/docs/Web/API/Window/closed)
    [[nodiscard]] bool closed() const;
    /// The stop method.
    /// [`Window.stop`](https://developer.mozilla.org/en-US/docs/Web/API/Window/stop)
    jsbind::Undefined stop();
    /// The focus method.
    /// [`Window.focus`](https://developer.mozilla.org/en-US/docs/Web/API/Window/focus)
    jsbind::Undefined focus();
    /// The blur method.
    /// [`Window.blur`](https://developer.mozilla.org/en-US/docs/Web/API/Window/blur)
    jsbind::Undefined blur();
    /// Getter of the `frames` attribute.
    /// [`Window.frames`](https://developer.mozilla.org/en-US/docs/Web/API/Window/frames)
    [[nodiscard]] jsbind::Any frames() const;
    /// Getter of the `length` attribute.
    /// [`Window.length`](https://developer.mozilla.org/en-US/docs/Web/API/Window/length)
    [[nodiscard]] unsigned long length() const;
    /// Getter of the `top` attribute.
    /// [`Window.top`](https://developer.mozilla.org/en-US/docs/Web/API/Window/top)
    [[nodiscard]] jsbind::Any top() const;
    /// Getter of the `opener` attribute.
    /// [`Window.opener`](https://developer.mozilla.org/en-US/docs/Web/API/Window/opener)
    [[nodiscard]] jsbind::Any opener() const;
    /// Setter of the `opener` attribute.
    /// [`Window.opener`](https://developer.mozilla.org/en-US/docs/Web/API/Window/opener)
    void opener(const jsbind::Any& value);
    /// Getter of the `parent` attribute.
    /// [`Window.parent`](https://developer.mozilla.org/en-US/docs/Web/API/Window/parent)
    [[nodiscard]] jsbind::Any parent() const;
    /// Getter of the `frameElement` attribute.
    /// [`Window.frameElement`](https://developer.mozilla.org/en-US/docs/Web/API/Window/frameElement)
    [[nodiscard]] Element frameElement() const;
    /// The open method.
    /// [`Window.open`](https://developer.mozilla.org/en-US/docs/Web/API/Window/open)
    jsbind::Any open();
    /// The open method.
    /// [`Window.open`](https://developer.mozilla.org/en-US/docs/Web/API/Window/open)
    jsbind::Any open(const jsbind::String& url);
    /// The open method.
    /// [`Window.open`](https://developer.mozilla.org/en-US/docs/Web/API/Window/open)
    jsbind::Any open(const jsbind::String& url, const jsbind::String& target);
    /// The open method.
    /// [`Window.open`](https://developer.mozilla.org/en-US/docs/Web/API/Window/open)
    jsbind::Any open(const jsbind::String& url, const jsbind::String& target, const jsbind::String& features);
    /// Getter of the `navigator` attribute.
    /// [`Window.navigator`](https://developer.mozilla.org/en-US/docs/Web/API/Window/navigator)
    [[nodiscard]] Navigator navigator() const;
    /// Getter of the `clientInformation` attribute.
    /// [`Window.clientInformation`](https://developer.mozilla.org/en-US/docs/Web/API/Window/clientInformation)
    [[nodiscard]] Navigator clientInformation() const;
    /// Getter of the `originAgentCluster` attribute.
    /// [`Window.originAgentCluster`](https://developer.mozilla.org/en-US/docs/Web/API/Window/originAgentCluster)
    [[nodiscard]] bool originAgentCluster() const;
    /// The alert method.
    /// [`Window.alert`](https://developer.mozilla.org/en-US/docs/Web/API/Window/alert)
    jsbind::Undefined alert(const jsbind::String& message);
    /// The confirm method.
    /// [`Window.confirm`](https://developer.mozilla.org/en-US/docs/Web/API/Window/confirm)
    bool confirm();
    /// The confirm method.
    /// [`Window.confirm`](https://developer.mozilla.org/en-US/docs/Web/API/Window/confirm)
    bool confirm(const jsbind::String& message);
    /// The prompt method.
    /// [`Window.prompt`](https://developer.mozilla.org/en-US/docs/Web/API/Window/prompt)
    jsbind::String prompt();
    /// The prompt method.
    /// [`Window.prompt`](https://developer.mozilla.org/en-US/docs/Web/API/Window/prompt)
    jsbind::String prompt(const jsbind::String& message);
    /// The prompt method.
    /// [`Window.prompt`](https://developer.mozilla.org/en-US/docs/Web/API/Window/prompt)
    jsbind::String prompt(const jsbind::String& message, const jsbind::String& default_);
    /// The print method.
    /// [`Window.print`](https://developer.mozilla.org/en-US/docs/Web/API/Window/print)
    jsbind::Undefined print();
    /// The postMessage method.
    /// [`Window.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/Window/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message);
    /// The postMessage method.
    /// [`Window.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/Window/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message, const WindowPostMessageOptions& options);
    /// Getter of the `credentialless` attribute.
    /// [`Window.credentialless`](https://developer.mozilla.org/en-US/docs/Web/API/Window/credentialless)
    [[nodiscard]] bool credentialless() const;
    /// Getter of the `orientation` attribute.
    /// [`Window.orientation`](https://developer.mozilla.org/en-US/docs/Web/API/Window/orientation)
    [[nodiscard]] short orientation() const;
    /// Getter of the `onorientationchange` attribute.
    /// [`Window.onorientationchange`](https://developer.mozilla.org/en-US/docs/Web/API/Window/onorientationchange)
    [[nodiscard]] jsbind::Any onorientationchange() const;
    /// Setter of the `onorientationchange` attribute.
    /// [`Window.onorientationchange`](https://developer.mozilla.org/en-US/docs/Web/API/Window/onorientationchange)
    void onorientationchange(const jsbind::Any& value);
    /// Getter of the `cookieStore` attribute.
    /// [`Window.cookieStore`](https://developer.mozilla.org/en-US/docs/Web/API/Window/cookieStore)
    [[nodiscard]] CookieStore cookieStore() const;
    /// The navigate method.
    /// [`Window.navigate`](https://developer.mozilla.org/en-US/docs/Web/API/Window/navigate)
    jsbind::Undefined navigate(const SpatialNavigationDirection& dir);
    /// Getter of the `viewport` attribute.
    /// [`Window.viewport`](https://developer.mozilla.org/en-US/docs/Web/API/Window/viewport)
    [[nodiscard]] Viewport viewport() const;
    /// The matchMedia method.
    /// [`Window.matchMedia`](https://developer.mozilla.org/en-US/docs/Web/API/Window/matchMedia)
    MediaQueryList matchMedia(const jsbind::String& query);
    /// Getter of the `screen` attribute.
    /// [`Window.screen`](https://developer.mozilla.org/en-US/docs/Web/API/Window/screen)
    [[nodiscard]] Screen screen() const;
    /// Getter of the `visualViewport` attribute.
    /// [`Window.visualViewport`](https://developer.mozilla.org/en-US/docs/Web/API/Window/visualViewport)
    [[nodiscard]] VisualViewport visualViewport() const;
    /// The moveTo method.
    /// [`Window.moveTo`](https://developer.mozilla.org/en-US/docs/Web/API/Window/moveTo)
    jsbind::Undefined moveTo(long x, long y);
    /// The moveBy method.
    /// [`Window.moveBy`](https://developer.mozilla.org/en-US/docs/Web/API/Window/moveBy)
    jsbind::Undefined moveBy(long x, long y);
    /// The resizeTo method.
    /// [`Window.resizeTo`](https://developer.mozilla.org/en-US/docs/Web/API/Window/resizeTo)
    jsbind::Undefined resizeTo(long width, long height);
    /// The resizeBy method.
    /// [`Window.resizeBy`](https://developer.mozilla.org/en-US/docs/Web/API/Window/resizeBy)
    jsbind::Undefined resizeBy(long x, long y);
    /// Getter of the `innerWidth` attribute.
    /// [`Window.innerWidth`](https://developer.mozilla.org/en-US/docs/Web/API/Window/innerWidth)
    [[nodiscard]] long innerWidth() const;
    /// Getter of the `innerHeight` attribute.
    /// [`Window.innerHeight`](https://developer.mozilla.org/en-US/docs/Web/API/Window/innerHeight)
    [[nodiscard]] long innerHeight() const;
    /// Getter of the `scrollX` attribute.
    /// [`Window.scrollX`](https://developer.mozilla.org/en-US/docs/Web/API/Window/scrollX)
    [[nodiscard]] double scrollX() const;
    /// Getter of the `pageXOffset` attribute.
    /// [`Window.pageXOffset`](https://developer.mozilla.org/en-US/docs/Web/API/Window/pageXOffset)
    [[nodiscard]] double pageXOffset() const;
    /// Getter of the `scrollY` attribute.
    /// [`Window.scrollY`](https://developer.mozilla.org/en-US/docs/Web/API/Window/scrollY)
    [[nodiscard]] double scrollY() const;
    /// Getter of the `pageYOffset` attribute.
    /// [`Window.pageYOffset`](https://developer.mozilla.org/en-US/docs/Web/API/Window/pageYOffset)
    [[nodiscard]] double pageYOffset() const;
    /// The scroll method.
    /// [`Window.scroll`](https://developer.mozilla.org/en-US/docs/Web/API/Window/scroll)
    jsbind::Undefined scroll(double x, double y);
    /// The scrollTo method.
    /// [`Window.scrollTo`](https://developer.mozilla.org/en-US/docs/Web/API/Window/scrollTo)
    jsbind::Undefined scrollTo(double x, double y);
    /// The scrollBy method.
    /// [`Window.scrollBy`](https://developer.mozilla.org/en-US/docs/Web/API/Window/scrollBy)
    jsbind::Undefined scrollBy(double x, double y);
    /// Getter of the `screenX` attribute.
    /// [`Window.screenX`](https://developer.mozilla.org/en-US/docs/Web/API/Window/screenX)
    [[nodiscard]] long screenX() const;
    /// Getter of the `screenLeft` attribute.
    /// [`Window.screenLeft`](https://developer.mozilla.org/en-US/docs/Web/API/Window/screenLeft)
    [[nodiscard]] long screenLeft() const;
    /// Getter of the `screenY` attribute.
    /// [`Window.screenY`](https://developer.mozilla.org/en-US/docs/Web/API/Window/screenY)
    [[nodiscard]] long screenY() const;
    /// Getter of the `screenTop` attribute.
    /// [`Window.screenTop`](https://developer.mozilla.org/en-US/docs/Web/API/Window/screenTop)
    [[nodiscard]] long screenTop() const;
    /// Getter of the `outerWidth` attribute.
    /// [`Window.outerWidth`](https://developer.mozilla.org/en-US/docs/Web/API/Window/outerWidth)
    [[nodiscard]] long outerWidth() const;
    /// Getter of the `outerHeight` attribute.
    /// [`Window.outerHeight`](https://developer.mozilla.org/en-US/docs/Web/API/Window/outerHeight)
    [[nodiscard]] long outerHeight() const;
    /// Getter of the `devicePixelRatio` attribute.
    /// [`Window.devicePixelRatio`](https://developer.mozilla.org/en-US/docs/Web/API/Window/devicePixelRatio)
    [[nodiscard]] double devicePixelRatio() const;
    /// The getComputedStyle method.
    /// [`Window.getComputedStyle`](https://developer.mozilla.org/en-US/docs/Web/API/Window/getComputedStyle)
    CSSStyleDeclaration getComputedStyle(const Element& elt);
    /// The getComputedStyle method.
    /// [`Window.getComputedStyle`](https://developer.mozilla.org/en-US/docs/Web/API/Window/getComputedStyle)
    CSSStyleDeclaration getComputedStyle(const Element& elt, const jsbind::String& pseudoElt);
    /// The getDigitalGoodsService method.
    /// [`Window.getDigitalGoodsService`](https://developer.mozilla.org/en-US/docs/Web/API/Window/getDigitalGoodsService)
    jsbind::Promise<DigitalGoodsService> getDigitalGoodsService(const jsbind::String& serviceProvider);
    /// Getter of the `documentPictureInPicture` attribute.
    /// [`Window.documentPictureInPicture`](https://developer.mozilla.org/en-US/docs/Web/API/Window/documentPictureInPicture)
    [[nodiscard]] DocumentPictureInPicture documentPictureInPicture() const;
    /// Getter of the `event` attribute.
    /// [`Window.event`](https://developer.mozilla.org/en-US/docs/Web/API/Window/event)
    [[nodiscard]] jsbind::Any event() const;
    /// Getter of the `fence` attribute.
    /// [`Window.fence`](https://developer.mozilla.org/en-US/docs/Web/API/Window/fence)
    [[nodiscard]] Fence fence() const;
    /// The showOpenFilePicker method.
    /// [`Window.showOpenFilePicker`](https://developer.mozilla.org/en-US/docs/Web/API/Window/showOpenFilePicker)
    jsbind::Promise<jsbind::TypedArray<FileSystemFileHandle>> showOpenFilePicker();
    /// The showOpenFilePicker method.
    /// [`Window.showOpenFilePicker`](https://developer.mozilla.org/en-US/docs/Web/API/Window/showOpenFilePicker)
    jsbind::Promise<jsbind::TypedArray<FileSystemFileHandle>> showOpenFilePicker(const OpenFilePickerOptions& options);
    /// The showSaveFilePicker method.
    /// [`Window.showSaveFilePicker`](https://developer.mozilla.org/en-US/docs/Web/API/Window/showSaveFilePicker)
    jsbind::Promise<FileSystemFileHandle> showSaveFilePicker();
    /// The showSaveFilePicker method.
    /// [`Window.showSaveFilePicker`](https://developer.mozilla.org/en-US/docs/Web/API/Window/showSaveFilePicker)
    jsbind::Promise<FileSystemFileHandle> showSaveFilePicker(const SaveFilePickerOptions& options);
    /// The showDirectoryPicker method.
    /// [`Window.showDirectoryPicker`](https://developer.mozilla.org/en-US/docs/Web/API/Window/showDirectoryPicker)
    jsbind::Promise<FileSystemDirectoryHandle> showDirectoryPicker();
    /// The showDirectoryPicker method.
    /// [`Window.showDirectoryPicker`](https://developer.mozilla.org/en-US/docs/Web/API/Window/showDirectoryPicker)
    jsbind::Promise<FileSystemDirectoryHandle> showDirectoryPicker(const DirectoryPickerOptions& options);
    /// The captureEvents method.
    /// [`Window.captureEvents`](https://developer.mozilla.org/en-US/docs/Web/API/Window/captureEvents)
    jsbind::Undefined captureEvents();
    /// The releaseEvents method.
    /// [`Window.releaseEvents`](https://developer.mozilla.org/en-US/docs/Web/API/Window/releaseEvents)
    jsbind::Undefined releaseEvents();
    /// Getter of the `external` attribute.
    /// [`Window.external`](https://developer.mozilla.org/en-US/docs/Web/API/Window/external)
    [[nodiscard]] External external() const;
    /// The queryLocalFonts method.
    /// [`Window.queryLocalFonts`](https://developer.mozilla.org/en-US/docs/Web/API/Window/queryLocalFonts)
    jsbind::Promise<jsbind::TypedArray<FontData>> queryLocalFonts();
    /// The queryLocalFonts method.
    /// [`Window.queryLocalFonts`](https://developer.mozilla.org/en-US/docs/Web/API/Window/queryLocalFonts)
    jsbind::Promise<jsbind::TypedArray<FontData>> queryLocalFonts(const QueryOptions& options);
    /// Getter of the `onappinstalled` attribute.
    /// [`Window.onappinstalled`](https://developer.mozilla.org/en-US/docs/Web/API/Window/onappinstalled)
    [[nodiscard]] jsbind::Any onappinstalled() const;
    /// Setter of the `onappinstalled` attribute.
    /// [`Window.onappinstalled`](https://developer.mozilla.org/en-US/docs/Web/API/Window/onappinstalled)
    void onappinstalled(const jsbind::Any& value);
    /// Getter of the `onbeforeinstallprompt` attribute.
    /// [`Window.onbeforeinstallprompt`](https://developer.mozilla.org/en-US/docs/Web/API/Window/onbeforeinstallprompt)
    [[nodiscard]] jsbind::Any onbeforeinstallprompt() const;
    /// Setter of the `onbeforeinstallprompt` attribute.
    /// [`Window.onbeforeinstallprompt`](https://developer.mozilla.org/en-US/docs/Web/API/Window/onbeforeinstallprompt)
    void onbeforeinstallprompt(const jsbind::Any& value);
    /// Getter of the `ondeviceorientation` attribute.
    /// [`Window.ondeviceorientation`](https://developer.mozilla.org/en-US/docs/Web/API/Window/ondeviceorientation)
    [[nodiscard]] jsbind::Any ondeviceorientation() const;
    /// Setter of the `ondeviceorientation` attribute.
    /// [`Window.ondeviceorientation`](https://developer.mozilla.org/en-US/docs/Web/API/Window/ondeviceorientation)
    void ondeviceorientation(const jsbind::Any& value);
    /// Getter of the `ondeviceorientationabsolute` attribute.
    /// [`Window.ondeviceorientationabsolute`](https://developer.mozilla.org/en-US/docs/Web/API/Window/ondeviceorientationabsolute)
    [[nodiscard]] jsbind::Any ondeviceorientationabsolute() const;
    /// Setter of the `ondeviceorientationabsolute` attribute.
    /// [`Window.ondeviceorientationabsolute`](https://developer.mozilla.org/en-US/docs/Web/API/Window/ondeviceorientationabsolute)
    void ondeviceorientationabsolute(const jsbind::Any& value);
    /// Getter of the `ondevicemotion` attribute.
    /// [`Window.ondevicemotion`](https://developer.mozilla.org/en-US/docs/Web/API/Window/ondevicemotion)
    [[nodiscard]] jsbind::Any ondevicemotion() const;
    /// Setter of the `ondevicemotion` attribute.
    /// [`Window.ondevicemotion`](https://developer.mozilla.org/en-US/docs/Web/API/Window/ondevicemotion)
    void ondevicemotion(const jsbind::Any& value);
    /// Getter of the `portalHost` attribute.
    /// [`Window.portalHost`](https://developer.mozilla.org/en-US/docs/Web/API/Window/portalHost)
    [[nodiscard]] PortalHost portalHost() const;
    /// The requestIdleCallback method.
    /// [`Window.requestIdleCallback`](https://developer.mozilla.org/en-US/docs/Web/API/Window/requestIdleCallback)
    unsigned long requestIdleCallback(const jsbind::Function& callback);
    /// The requestIdleCallback method.
    /// [`Window.requestIdleCallback`](https://developer.mozilla.org/en-US/docs/Web/API/Window/requestIdleCallback)
    unsigned long requestIdleCallback(const jsbind::Function& callback, const IdleRequestOptions& options);
    /// The cancelIdleCallback method.
    /// [`Window.cancelIdleCallback`](https://developer.mozilla.org/en-US/docs/Web/API/Window/cancelIdleCallback)
    jsbind::Undefined cancelIdleCallback(unsigned long handle);
    /// The getSelection method.
    /// [`Window.getSelection`](https://developer.mozilla.org/en-US/docs/Web/API/Window/getSelection)
    Selection getSelection();
    /// Getter of the `sharedStorage` attribute.
    /// [`Window.sharedStorage`](https://developer.mozilla.org/en-US/docs/Web/API/Window/sharedStorage)
    [[nodiscard]] SharedStorage sharedStorage() const;
    /// Getter of the `speechSynthesis` attribute.
    /// [`Window.speechSynthesis`](https://developer.mozilla.org/en-US/docs/Web/API/Window/speechSynthesis)
    [[nodiscard]] SpeechSynthesis speechSynthesis() const;
    /// Getter of the `launchQueue` attribute.
    /// [`Window.launchQueue`](https://developer.mozilla.org/en-US/docs/Web/API/Window/launchQueue)
    [[nodiscard]] LaunchQueue launchQueue() const;
    /// The getScreenDetails method.
    /// [`Window.getScreenDetails`](https://developer.mozilla.org/en-US/docs/Web/API/Window/getScreenDetails)
    jsbind::Promise<ScreenDetails> getScreenDetails();
    /// Getter of the `onbeforexrselect` attribute.
    /// [`Window.onbeforexrselect`](https://developer.mozilla.org/en-US/docs/Web/API/Window/onbeforexrselect)
    [[nodiscard]] jsbind::Any onbeforexrselect() const;
    /// Setter of the `onbeforexrselect` attribute.
    /// [`Window.onbeforexrselect`](https://developer.mozilla.org/en-US/docs/Web/API/Window/onbeforexrselect)
    void onbeforexrselect(const jsbind::Any& value);
    /// Getter of the `onportalactivate` attribute.
    /// [`Window.onportalactivate`](https://developer.mozilla.org/en-US/docs/Web/API/Window/onportalactivate)
    [[nodiscard]] jsbind::Any onportalactivate() const;
    /// Setter of the `onportalactivate` attribute.
    /// [`Window.onportalactivate`](https://developer.mozilla.org/en-US/docs/Web/API/Window/onportalactivate)
    void onportalactivate(const jsbind::Any& value);
    /// Getter of the `crypto` attribute.
    /// [`Window.crypto`](https://developer.mozilla.org/en-US/docs/Web/API/Window/crypto)
    [[nodiscard]] Crypto crypto() const;
    /// The requestAnimationFrame method.
    /// [`Window.requestAnimationFrame`](https://developer.mozilla.org/en-US/docs/Web/API/Window/requestAnimationFrame)
    unsigned long requestAnimationFrame(const jsbind::Function& callback);
    /// The cancelAnimationFrame method.
    /// [`Window.cancelAnimationFrame`](https://developer.mozilla.org/en-US/docs/Web/API/Window/cancelAnimationFrame)
    jsbind::Undefined cancelAnimationFrame(unsigned long handle);
    /// Getter of the `sessionStorage` attribute.
    /// [`Window.sessionStorage`](https://developer.mozilla.org/en-US/docs/Web/API/Window/sessionStorage)
    [[nodiscard]] Storage sessionStorage() const;
    /// Getter of the `localStorage` attribute.
    /// [`Window.localStorage`](https://developer.mozilla.org/en-US/docs/Web/API/Window/localStorage)
    [[nodiscard]] Storage localStorage() const;
};

