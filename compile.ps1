# Adicione isso ao seu perfil PowerShell

function Compile-C99 {
    param([string]$File)
    if (-not $File) {
        $File = (Get-Item -Path ".\*.c" | Select-Object -First 1).Name
    }
    $OutputFile = [System.IO.Path]::GetFileNameWithoutExtension($File)
    gcc -std=c99 -Wall -Wextra -g3 $File -o "$OutputFile.exe"
    if ($LASTEXITCODE -eq 0) {
        Write-Host "✓ Compilado com sucesso em C99!" -ForegroundColor Green
    } else {
        Write-Host "✗ Erro na compilação" -ForegroundColor Red
    }
}

Set-Alias -Name cc99 -Value Compile-C99
