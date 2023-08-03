#pragma once

// �η� �繫��
class Device
{
public:
	void Init();

	// Get �Լ���
	ComPtr<IDXGIFactory> GetDXGI() const { return _dxgi; }
	ComPtr<ID3D12Device> GetDevice() const { return _device; }

private:
	// COM(Component Object Model)
	// - DX�� ���α׷��� ��� �������� ���� ȣȯ���� �����ϰ� �ϴ� ���
	// - COM ��ü(COM �������̽�)�� ���. ���λ����� �츮���� ������
	// - ComPtr ������ ����Ʈ ������
	ComPtr<ID3D12Debug>		_debugController;	// ����� �޽��� ���
	ComPtr<IDXGIFactory>	_dxgi;				// ȭ�� ���� ��ɵ�
	ComPtr<ID3D12Device>	_device;			// ���� ��ü ����
};