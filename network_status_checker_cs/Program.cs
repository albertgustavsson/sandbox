using System.Net;
using System.Net.Sockets;

if (!System.Net.NetworkInformation.NetworkInterface.GetIsNetworkAvailable())
    Console.WriteLine("Not connected to network");

string hostName = Dns.GetHostName();
Console.WriteLine($"Hostname: {hostName}");

IPHostEntry ipEntry = Dns.GetHostEntry(hostName, AddressFamily.InterNetwork);

try
{
    Console.WriteLine($"IPv4 address: {ipEntry.AddressList[0]}");
}
catch (IndexOutOfRangeException)
{
    Console.Error.WriteLine("No IP address found");
}